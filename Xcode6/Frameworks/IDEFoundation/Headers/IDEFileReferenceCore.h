

#import <IDEFoundation/IDEContainerItemCore.h>

#import <IDEFoundation/IDEFileReferenceCore.h>

@class DVTFileDataType, NSString;

@interface IDEFileReferenceCore : IDEContainerItemCore <IDEFileReferenceCore>
{
    DVTFileDataType *_assignedDataType;
}

@property(copy) DVTFileDataType *assignedDataType; // @synthesize assignedDataType=_assignedDataType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <IDEContainerCore> parentContainer;
@property(retain) id <IDEGroupCore> parentGroup;
@property(copy) NSString *path;
@property(readonly) Class superclass;

@end

