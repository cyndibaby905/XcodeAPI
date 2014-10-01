

#import <Foundation/Foundation.h>

@class NSMutableArray;

@interface IDESourceControlWorkingTreeItemHolder : NSObject
{
    NSMutableArray *_workingTreeItems;
}

- (unsigned long long)navigableItem_indexOfRepresentedObjectForIdentifier:(id)arg1 inRelationshipKeyPath:(id)arg2;
- (id)navigableItem_identifierForRepresentedObjectAtIndex:(unsigned long long)arg1 inRelationshipKeyPath:(id)arg2;
- (void)addFilePath:(id)arg1;
@property(readonly) NSMutableArray *workingTreeItems; // @synthesize workingTreeItems=_workingTreeItems;

@end

