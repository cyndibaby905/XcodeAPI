

#import <Foundation/Foundation.h>

@class DVTDispatchLock, NSString;

@interface DVTDynamicLogController : NSObject
{
    NSString *_path;
    DVTDispatchLock *_dispatchLock;
}

+ (id)dynamicLogControllerForPath:(id)arg1 createIfNeeded:(BOOL)arg2 returningError:(id *)arg3;
@property(retain) DVTDispatchLock *dispatchLock; // @synthesize dispatchLock=_dispatchLock;
@property(retain) NSString *path; // @synthesize path=_path;
- (BOOL)writeString:(id)arg1 toFileAtSubpath:(id)arg2 returningError:(id *)arg3;
- (id)initWithPath:(id)arg1;

@end

