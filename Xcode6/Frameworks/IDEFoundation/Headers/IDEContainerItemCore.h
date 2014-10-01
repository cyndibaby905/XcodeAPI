

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEContainerItemCore-Protocol.h>

@class NSString;

@interface IDEContainerItemCore : NSObject <IDEContainerItemCore>
{
    id <IDEGroupCore> _parentGroup;
    NSString *_path;
}

@property(copy) NSString *path; // @synthesize path=_path;
@property(retain) id <IDEGroupCore> parentGroup; // @synthesize parentGroup=_parentGroup;
@property(readonly) id <IDEContainerCore> parentContainer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

