

@class NSString;

@protocol IDELocalizationWorkProgress
@property(readonly) NSString *workTitle;
@property(readonly) NSString *phase;
@property(readonly) long long progress;
@property(readonly) BOOL complete;
@end

