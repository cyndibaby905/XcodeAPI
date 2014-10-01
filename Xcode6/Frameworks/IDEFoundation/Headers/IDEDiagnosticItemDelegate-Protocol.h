

#import <Foundation/Foundation.h>

@class IDEDiagnosticActivityLogMessage;

@protocol IDEDiagnosticItemDelegate <NSObject>

@optional
- (void)diagnosticItemWasFixed:(IDEDiagnosticActivityLogMessage *)arg1;
@end

