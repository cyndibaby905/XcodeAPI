

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDESourceControlPatchNode-Protocol.h>

@class DVTFilePath, DVTFileWrapper, IDESourceControlWorkingTreeItem, NSString;

@interface IDESourceControlPatchItemNode : NSObject <IDESourceControlPatchNode>
{
    BOOL _reverseDiff;
    IDESourceControlWorkingTreeItem *_item;
    NSString *_format;
    DVTFilePath *_diffFilePath;
    DVTFilePath *_baseFilePath;
    NSString *_diffString;
    DVTFileWrapper *_wrapper;
    NSString *_status;
    NSString *_baseRevisionIdentifier;
}

@property BOOL reverseDiff; // @synthesize reverseDiff=_reverseDiff;
@property(copy) NSString *baseRevisionIdentifier; // @synthesize baseRevisionIdentifier=_baseRevisionIdentifier;
@property(copy) NSString *status; // @synthesize status=_status;
@property(retain) DVTFileWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(copy) NSString *diffString; // @synthesize diffString=_diffString;
@property(copy) DVTFilePath *baseFilePath; // @synthesize baseFilePath=_baseFilePath;
@property(copy) DVTFilePath *diffFilePath; // @synthesize diffFilePath=_diffFilePath;
@property(copy) NSString *format; // @synthesize format=_format;
@property(readonly) __weak IDESourceControlWorkingTreeItem *item; // @synthesize item=_item;
- (id)initWithItem:(id)arg1;
- (id)representedObject;
- (id)modifiedItems;
- (id)children;
- (BOOL)resolved;
- (id)indexInfo;
- (id)fileWrapper;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

