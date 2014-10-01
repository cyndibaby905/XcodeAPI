

#import <DVTFoundation/DVTModelTree.h>

@class IDESourceControlExtension, IDESourceControlManager, IDESourceControlTreeGroup, NSString;

@interface IDESourceControlTree : DVTModelTree
{
    IDESourceControlManager *_sourceControlManager;
    IDESourceControlExtension *_sourceControlExtension;
    NSString *_location;
    NSString *_name;
    unsigned long long _state;
    BOOL _disallowLoadingChildren;
    NSString *_identifier;
    NSString *_cachedFirstRevision;
}

+ (void)initialize;
+ (id)treeLoadingModelObjectGraph;
@property(copy) NSString *cachedFirstRevision; // @synthesize cachedFirstRevision=_cachedFirstRevision;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property BOOL disallowLoadingChildren; // @synthesize disallowLoadingChildren=_disallowLoadingChildren;
@property unsigned long long state; // @synthesize state=_state;
@property(copy) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain) IDESourceControlExtension *sourceControlExtension; // @synthesize sourceControlExtension=_sourceControlExtension;
@property(readonly) IDESourceControlManager *sourceControlManager; // @synthesize sourceControlManager=_sourceControlManager;
- (id)copyRepository;
- (NSString *)description;
- (BOOL)containsItemAtLocation:(id)arg1;
- (id)firstRevisionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)subclass_createRootNode;
- (void)primitiveInvalidate;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 sourceControlExtension:(id)arg2 sourceControlManager:(id)arg3;
- (id)initWithLocation:(id)arg1 sourceControlManager:(id)arg2;
- (id)_initWithLocation:(id)arg1 sourceControlManager:(id)arg2;

// Remaining properties
@property(readonly) IDESourceControlTreeGroup *rootGroup; // @dynamic rootGroup;

@end
