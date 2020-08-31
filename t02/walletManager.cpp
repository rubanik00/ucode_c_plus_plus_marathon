#include"walletManager.h"

Wallet* createWallet(int money) {
    Wallet *wallet = new Wallet;
    wallet->septims = money;

    return wallet;
}

void destroyWallet(Wallet * wallet) {
    delete wallet;
}

Wallet* createWallets(int amount) {
    Wallet *wallets = new Wallet[amount];
    
    return wallets;
}


void destroyWallets(Wallet * wallets) {
    delete[] wallets;
}
