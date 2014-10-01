

#import <IDEFoundation/IDEContainerItemCore.h>

#import <IDEFoundation/IDEGroupCore.h>

@class NSArray, NSString;

@interface IDEGroupCore : IDEContainerItemCore <IDEGroupCore>
{
    id <IDEContainerCore> _parentContainer;
    NSString *_name;
    NSArray *_subitems;
}

@property(copy) NSArray *subitems; // @synthesize subitems=_subitems;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)setParentContainer:(id)arg1;
@property(readonly) id <IDEContainerCore> parentContainer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) id <IDEGroupCore> parentGroup;
@property(copy) NSString *path;
@property(readonly) Class superclass;

@end

