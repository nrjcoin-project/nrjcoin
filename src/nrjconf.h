#ifndef NRJCONF_H
#define NRJCONF_H

//#include "main.h"



/* Step 1 */
#define NRJ_NTIME 1397810333 // unix timestamp

#define NRJ_NNONCE 2085786596
#define NRJ_TESTNET_NNONCE 386232332

#define NRJ_PORT 10333
#define NRJ_RPC_PORT 10332

#define NRJ_TESTNET_PORT 20333
#define NRJ_TESTNET_RPC_PORT 20332

#define NRJ_PSZTIMESTAMP "NY Times 18/Apr/2014 Russia and Ukraine together with the United States and the European Union sit down for emergency talks in Geneva"

#define NRJ_MAXMONEY 200000000 //84000000 * COIN; to 200 000 000
#define NRJ_BLOCKCOIN 50 //coins per gen block
#define NRJ_BLOCKCOIN_MIN 0.05 //coins per gen block 0.05*30*24*356=12.816 || 30*24*356=256.320
#define NRJ_BLOCKCOIN_PREMINING 100100000 //coins per gen block

// Nrjcoin: 3.5 days to 3.0 days
#define NRJ_TARGETTIMESPAN 3.0 * 24 * 60 * 60
// Nrjcoin: 2.5 minutes to 2.0 minutes
#define NRJ_TARGETSPACING  2.0 * 60


#define NRJ_DNSSEED         {"nrjcoin.org", "dnsseed.nrjcoin.org"},\
                            {"nrjcoin.net", "dnsseed.nrjcoin.net"},\
                            {"nrjcoin.info","dnsseed.nrjcoin.info"},\
                            {"cluentio.de", "dnsseed.cluentio.de"}

#define NRJ_TESTNET_DNSSEED {"nrjcoin.org", "testnet-seed.nrjcoin.org"},\
                            {"nrjcoin.net", "testnet-seed.nrjcoin.net"},\
                            {"nrjcoin.info","testnet-seed.nrjcoin.info"},\
                            {"cluentio.de", "testnet-seed.cluentio.de"}

/* Step 2 */
#define NRJ_HASH_MERKLE_ROOT "0xf7fc8e08b04a0103a4507114b335ff644c3d357df4c95c8895ef1e4023b867cb"

#define NRJ_HASH_GENESIS_BLOCK "0x57ead6779ad0c7ed95727e8263d80a145f47700de15aff46388213159a014675"
#define NRJ_TESTNET_HASH_GENESIS_BLOCK "0x6818fc4c3c5c57e86b5ff91d966a5d37390a43039ea8b2582b41580b4ca44da9"



//#define NRJ_IF_SEARCHING_FOR_GENESISBLOCK_ENABLED 1

/*
static inline void NrjSearchForGenesisblock(CBlock block)
{
    // If genesis block hash does not match, then generate new genesis hash.
    if (true && block.GetHash() != hashGenesisBlock)
    {
        printf("Searching for genesis block...\n");
        // This will figure out a valid hash and Nonce if you're
        // creating a different genesis block:
        uint256 hashTarget = CBigNum().SetCompact(block.nBits).getuint256();
        uint256 thash;
        char scratchpad[SCRYPT_SCRATCHPAD_SIZE];

        loop
        {
    #if defined(USE_SSE2)
            // Detection would work, but in cases where we KNOW it always has SSE2,
            // it is faster to use directly than to use a function pointer or conditional.
    #if defined(_M_X64) || defined(__x86_64__) || defined(_M_AMD64) || (defined(MAC_OSX) && defined(__i386__))
            // Always SSE2: x86_64 or Intel MacOS X
            scrypt_1024_1_1_256_sp_sse2(BEGIN(block.nVersion), BEGIN(thash), scratchpad);
    #else
            // Detect SSE2: 32bit x86 Linux or Windows
            scrypt_1024_1_1_256_sp(BEGIN(block.nVersion), BEGIN(thash), scratchpad);
    #endif
    #else
            // Generic scrypt
            scrypt_1024_1_1_256_sp_generic(BEGIN(block.nVersion), BEGIN(thash), scratchpad);
    #endif
            if (thash <= hashTarget)
                break;
            if ((block.nNonce & 0xFFF) == 0)
            {
                printf("nonce %08X: hash = %s (target = %s)\n", block.nNonce, thash.ToString().c_str(), hashTarget.ToString().c_str());
            }
            ++block.nNonce;
            if (block.nNonce == 0)
            {
                printf("NONCE WRAPPED, incrementing time\n");
                ++block.nTime;
            }
        }
        printf("block.nTime = %u \n", block.nTime);
        printf("block.nNonce = %u \n", block.nNonce);
        printf("block.GetHash = %s\n", block.GetHash().ToString().c_str());
    }
}
*/

#endif // NRJCONF_H
