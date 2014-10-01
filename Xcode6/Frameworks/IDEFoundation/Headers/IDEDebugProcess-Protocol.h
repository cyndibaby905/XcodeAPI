

#import <IDEFoundation/IDEDebugNavigableModel-Protocol.h>

@class NSArray, NSString;

@protocol IDEDebugProcess <IDEDebugNavigableModel>
@property(copy, nonatomic) NSString *name;
- (NSString *)contentDelegateUIExtensionIdentifier;

@optional
@property(readonly, nonatomic) NSArray *loadedCodeModules;
@end

