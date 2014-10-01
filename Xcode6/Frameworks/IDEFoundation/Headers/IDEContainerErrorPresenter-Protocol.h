

@class IDEContainer, NSError;

@protocol IDEContainerErrorPresenter
- (BOOL)presentError:(NSError *)arg1;
- (int)handleSaveError:(NSError *)arg1 forContainer:(IDEContainer *)arg2 withAction:(int)arg3;
@end

