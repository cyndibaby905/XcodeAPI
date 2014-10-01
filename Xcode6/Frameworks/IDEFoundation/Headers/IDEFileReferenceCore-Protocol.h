

#import <IDEFoundation/IDEContainerItemCore.h>

@class DVTFileDataType;

@protocol IDEFileReferenceCore <IDEContainerItemCore>
@property(copy) DVTFileDataType *assignedDataType;
@end

