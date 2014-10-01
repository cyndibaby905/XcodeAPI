

#import <Foundation/Foundation.h>

@class DVTFilePath, NSArray, NSDictionary, NSString;

@interface IDESourceControlPatch : NSObject
{
    NSArray *_nodes;
    NSDictionary *_itemNodes;
    NSDictionary *_index;
    DVTFilePath *_location;
    NSString *_name;
    NSString *_message;
    NSString *_workspaceName;
    NSDictionary *_treeNodes;
}

+ (id)patchesDirectoryForWorkspace:(id)arg1;
+ (id)patchExtension;
@property(retain) NSDictionary *treeNodes; // @synthesize treeNodes=_treeNodes;
@property(copy) NSString *workspaceName; // @synthesize workspaceName=_workspaceName;
@property(copy) NSString *message; // @synthesize message=_message;
@property(copy) NSString *name; // @synthesize name=_name;
@property(retain) DVTFilePath *location; // @synthesize location=_location;
@property(retain) NSDictionary *index; // @synthesize index=_index;
@property(retain) NSDictionary *itemNodes; // @synthesize itemNodes=_itemNodes;
- (id)initWithNodes:(id)arg1;
- (id)nodeForItem:(id)arg1;
- (id)modifiedItems;
@property(readonly) NSString *fileName;

@end

