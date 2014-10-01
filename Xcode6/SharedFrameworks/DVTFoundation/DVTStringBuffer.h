

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTStringBuffer : NSObject
{
    unsigned long long bufferLen;
    unsigned long long bufferLoc;
    NSString *string;
    unsigned long long stringLen;
    unsigned long long stringLoc;
    unsigned short buffer[32];
    unsigned short curChar;
    unsigned short _unused;
}


@end

