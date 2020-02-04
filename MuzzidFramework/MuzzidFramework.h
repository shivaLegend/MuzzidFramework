//
//  MuzzidFramework.h
//  MuzzidFramework
//
//  Created by Tai Nguyen on 2/4/20.
//  Copyright © 2020 Tai Nguyen. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for MuzzidFramework.
FOUNDATION_EXPORT double MuzzidFrameworkVersionNumber;

//! Project version string for MuzzidFramework.
FOUNDATION_EXPORT const unsigned char MuzzidFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <MuzzidFramework/PublicHeader.h>
typedef struct _UPoint2D
{
    unsigned int x;
    unsigned int y;
} UPoint2D;

typedef struct _UPoint2DVec
{
    UPoint2D* pData;
    unsigned int nSize;
    unsigned int nCap;
} UPoint2DVec;

UPoint2DVec extractBoundary(unsigned int* label, unsigned int nWidth, unsigned int nHeight, unsigned int compIdx);
unsigned int getCC(const unsigned char* pImg, unsigned int nWidth, unsigned int nHeight,unsigned int* label, unsigned char b8nbd);
void printBoundary(unsigned int* label, unsigned int nWidth, unsigned int nHeight, UPoint2DVec ptVec);
void freeUPoint2DVec(UPoint2DVec* a);
void printLabel(unsigned int* pLabel, unsigned int nWidth, unsigned int nHeight);
void testExtractBoundary01(void);


