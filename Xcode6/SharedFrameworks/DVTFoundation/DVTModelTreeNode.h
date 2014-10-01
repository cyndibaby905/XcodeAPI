

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <DVTFoundation/DVTModelObject.h>

@class DVTModelObjectGraph, DVTModelTree, DVTStackBacktrace, NSArray, NSMutableArray, NSString;

@interface DVTModelTreeNode : NSObject <DVTModelObject, DVTInvalidation>
{
    DVTModelTree *_tree;
    DVTModelTreeNode *_parentNode;
    NSMutableArray *_childNodes;
}

+ (BOOL)automaticallyNotifiesObserversOfSubclass_mutableChildNodes;
+ (BOOL)automaticallyNotifiesObserversOfSubclass_childNodes;
+ (BOOL)automaticallyNotifiesObserversOfSubclass_parentNode;
+ (BOOL)automaticallyNotifiesObserversOfSubclass_tree;
+ (void)synthesizeCoverAPIWithKeyForTree:(id)arg1 keyForParentNode:(id)arg2 keyForChildNodes:(id)arg3;
+ (BOOL)automaticallyNotifiesObserversOfObjectGraph;
+ (void)initialize;
@property(readonly) DVTModelTreeNode *subclass_parentNode; // @synthesize subclass_parentNode=_parentNode;
@property(readonly) DVTModelTree *subclass_tree; // @synthesize subclass_tree=_tree;
- (void)removeSubclass_childNodesAtIndexes:(id)arg1;
- (void)insertSubclass_childNodes:(id)arg1 atIndexes:(id)arg2;
- (id)subclass_childNodesAtIndexes:(id)arg1;
- (id)objectInSubclass_childNodesAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfSubclass_childNodes;
@property(readonly) NSMutableArray *subclass_mutableChildNodes;
@property(copy) NSArray *subclass_childNodes;
- (void)_setSubclass_parentNode:(id)arg1;
- (void)_setSubclass_tree:(id)arg1;
@property(readonly, nonatomic) DVTModelObjectGraph *objectGraph;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

