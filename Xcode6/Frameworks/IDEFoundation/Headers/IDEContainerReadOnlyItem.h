

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEReadOnlyItem-Protocol.h>

@class DVTFilePath, IDEContainer, NSString, NSURL;

@interface IDEContainerReadOnlyItem : NSObject <IDEReadOnlyItem>
{
    int _readOnlyStatus;
    IDEContainer *_container;
    DVTFilePath *_filePath;
}

@property int readOnlyStatus; // @synthesize readOnlyStatus=_readOnlyStatus;
@property(readonly) IDEContainer *container; // @synthesize container=_container;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (BOOL)makeWritableWithError:(id *)arg1;
- (void)updateReadOnlyStatus;
@property(readonly) NSURL *readOnlyItemURL;
@property(readonly, copy) NSString *description;
- (id)initWithFilePath:(id)arg1 container:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

