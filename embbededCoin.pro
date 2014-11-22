TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    aes_modes.c \
    aescrypt.c \
    aeskey.c \
    aestab.c \
    base58.c \
    bignum.c \
    bip32.c \
    bip39.c \
    coins.c \
    ecdsa.c \
    hmac.c \
    pbkdf2.c \
    rand.c \
    ripemd160.c \
    secp256k1.c \
    sha2.c \
    signing.c \
    transaction.c

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    aes.h \
    aesopt.h \
    aestab.h \
    base58.h \
    bignum.h \
    bip32.h \
    bip39.h \
    bip39_english.h \
    coins.h \
    ecdsa.h \
    hmac.h \
    options.h \
    pbkdf2.h \
    rand.h \
    ripemd160.h \
    secp256k1.h \
    sha2.h \
    signing.h \
    transaction.h \
    types.pb.h \
    pb.h

