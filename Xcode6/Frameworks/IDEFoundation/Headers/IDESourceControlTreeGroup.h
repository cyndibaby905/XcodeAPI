

#import <IDEFoundation/IDESourceControlTreeItem.h>

@class NSArray, NSMutableArray;

@interface IDESourceControlTreeGroup : IDESourceControlTreeItem
{
    BOOL _areChildrenLoaded;
}

+ (id)keyPathsForValuesAffectingSparseChildren;
+ (void)initialize;
@property BOOL areChildrenLoaded; // @synthesize areChildrenLoaded=_areChildrenLoaded;
- (void)clearAllRevisions;
- (void)reload;
@property(readonly) NSMutableArray *mutableChildren; // @dynamic mutableChildren;
@property(copy) NSArray *children; // @dynamic children;
- (id)sparseChildren;
- (void)computeChildrenIfNeeded;
- (id)ideModelObjectTypeIdentifier;

@end

