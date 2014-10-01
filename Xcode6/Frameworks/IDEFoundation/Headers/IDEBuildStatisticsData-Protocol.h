

@class DVTLogAspect, NSString;

@protocol IDEBuildStatisticsData
@property(readonly) long long numberOfVMPageouts;
@property(readonly) long long numberOfVMPageins;
@property(readonly) double elapsedSystemTime;
@property(readonly) double elapsedUserTime;
@property(readonly) double elapsedWallClockTime;
@property(readonly) double endWallClockTime;
@property(readonly) double startWallClockTime;
@property(readonly) unsigned long long ordinal;
@property(readonly, copy) NSString *title;
- (void)emitContentsForAspect:(DVTLogAspect *)arg1 logLevel:(int)arg2 indentLevel:(unsigned long long)arg3 withBlock:(void (^)(id <IDEBuildStatisticsData>, DVTLogAspect *, int, unsigned long long, char *, char *))arg4;
- (NSString *)defaultEmissionStringWithIndentLevel:(unsigned long long)arg1;
@end

