

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEInitialization-Protocol.h>

@interface _IDELegacyUserDefaultsImporter : NSObject <IDEInitialization>
{
}

+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;

@end

