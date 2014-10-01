

#import <Foundation/Foundation.h>

@class DVTTextDocumentLocation;

@interface IDEActivityLogAnalyzerControlFlowStepEdge : NSObject
{
    DVTTextDocumentLocation *_startLocation;
    DVTTextDocumentLocation *_endLocation;
}

- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (NSString *)description;
- (id)endLocation;
- (id)startLocation;
- (id)initWithStartLocation:(id)arg1 endLocation:(id)arg2;

@end

