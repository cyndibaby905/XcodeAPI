

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <DVTFoundation/DVTModelObject.h>

@class DVTModelObjectGraph, DVTModelTreeNode, DVTStackBacktrace, NSString;

@interface DVTModelTree : NSObject <DVTModelObject, DVTInvalidation>
{
    DVTModelObjectGraph *_objectGraph;
    DVTModelTreeNode *_rootNode;
}

+ (BOOL)automaticallyNotifiesObserversOfSubclass_rootNode;
+ (void)synthesizeCoverAPIWithKeyForRootNode:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversOfObjectGraph;
+ (void)initialize;
@property(readonly) DVTModelTreeNode *subclass_rootNode; // @synthesize subclass_rootNode=_rootNode;
@property(retain, nonatomic) DVTModelObjectGraph *objectGraph; // @synthesize objectGraph=_objectGraph;
- (id)subclass_createRootNode;
- (void)_recursivelyMoveNode:(id)arg1 fromObjectGraph:(id)arg2 toObjectGraph:(id)arg3;
- (void)primitiveInvalidate;
- (id)initWithObjectGraph:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

