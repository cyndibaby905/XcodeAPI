

#import <Foundation/Foundation.h>

@class IDEBuilder, NSString;

@interface IDEBuildFolder : NSObject
{
    NSString *_path;
    IDEBuilder *_currentBuilder;
}

+ (id)sharedBuildFolderWithPath:(id)arg1 error:(id *)arg2;
@property(retain) IDEBuilder *currentBuilder; // @synthesize currentBuilder=_currentBuilder;
@property(readonly) NSString *path; // @synthesize path=_path;
- (NSString *)description;
- (void)unregisterCurrentBuilder:(id)arg1;
- (void)registerCurrentBuilder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1 error:(id *)arg2;

@end

