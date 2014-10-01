

#import <Foundation/Foundation.h>

@interface DVTFileDataTypeDetection : NSObject
{
}

+ (id)guessFileDataTypeForFileAtPath:(id)arg1 bestCurrentGuessedFileDataType:(id)arg2;
+ (id)_guessFileDataTypeUsingMagicForFileAtPath:(id)arg1 bestCurrentGuessedFileDataType:(id)arg2 fileLength:(unsigned long long)arg3 fileBytes:(const char *)arg4;
+ (id)_magicCaches;

@end

