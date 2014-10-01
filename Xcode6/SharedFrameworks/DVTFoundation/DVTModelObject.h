

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTModelObject-Protocol.h>

@class DVTModelObjectGraph, NSString;

@interface DVTModelObject : NSObject <DVTModelObject>
{
    DVTModelObjectGraph *_objectGraph;
    id _observationInfo;
    int _retainCount;
}

@property(retain, nonatomic) DVTModelObjectGraph *objectGraph;
- (void)setObservationInfo:(id)arg1;
- (id)observationInfo;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

