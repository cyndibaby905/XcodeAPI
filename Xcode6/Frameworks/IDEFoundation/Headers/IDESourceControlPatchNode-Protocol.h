

#import <Foundation/Foundation.h>

@class DVTFileWrapper, NSArray, NSDictionary;

@protocol IDESourceControlPatchNode <NSObject>
- (id)representedObject;
- (NSArray *)children;
- (BOOL)resolved;
- (NSArray *)modifiedItems;
- (DVTFileWrapper *)fileWrapper;
- (NSDictionary *)indexInfo;
@end

