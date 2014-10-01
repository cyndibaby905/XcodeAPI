

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEBuildStatisticsData.h>

@class DVTDispatchLock, DVTSystemStatisticsMeasurement, NSMutableArray, NSMutableDictionary, NSString;

@interface IDEBuildStatisticsSection : NSObject <IDEBuildStatisticsData>
{
    NSMutableDictionary *_statisticsSectionList;
    NSMutableArray *_statisticsDataList;
    unsigned long long _ordinalGenerator;
    double _elapsedUserTime;
    double _elapsedSystemTime;
    long long _numberOfVMPageins;
    long long _numberOfVMPageouts;
    DVTDispatchLock *_dispatchLock;
    NSString *_title;
    DVTSystemStatisticsMeasurement *_startSystemStats;
    DVTSystemStatisticsMeasurement *_endSystemStats;
    unsigned long long _ordinal;
    CDUnknownBlockType _contentsEmissionBlock;
}

@property(copy) CDUnknownBlockType contentsEmissionBlock; // @synthesize contentsEmissionBlock=_contentsEmissionBlock;
@property unsigned long long ordinal; // @synthesize ordinal=_ordinal;
@property(retain) DVTSystemStatisticsMeasurement *endSystemStats; // @synthesize endSystemStats=_endSystemStats;
@property(retain) DVTSystemStatisticsMeasurement *startSystemStats; // @synthesize startSystemStats=_startSystemStats;
@property(copy) NSString *title; // @synthesize title=_title;
- (NSString *)description;
- (void)emitContentsForAspect:(id)arg1 logLevel:(int)arg2 indentLevel:(unsigned long long)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)defaultEmissionStringWithIndentLevel:(unsigned long long)arg1;
@property(readonly) long long numberOfVMPageouts;
@property(readonly) long long numberOfVMPageins;
@property(readonly) double elapsedSystemTime;
@property(readonly) double elapsedUserTime;
@property(readonly) double elapsedWallClockTime;
@property(readonly) double endWallClockTime;
@property(readonly) double startWallClockTime;
- (void)recordEndSystemStats;
- (void)recordStartSystemStats;
- (id)children;
- (id)dataObjects;
- (id)subsections;
- (void)addBuildStatisticsData:(id)arg1;
- (void)addBuildStatisticsSection:(id)arg1;
- (void)addNewBuildStatisticsDataWithTitle:(id)arg1 commandString:(id)arg2 startSystemStatisticsMeasurement:(id)arg3 endSystemStatisticsMeasurement:(id)arg4 elapsedUserTime:(double)arg5 elapsedSystemTime:(double)arg6;
- (id)buildStatisticsSectionWithTitleFormat:(id)arg1;
- (unsigned long long)_newOrdinal;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 ordinal:(unsigned long long)arg2;

@end

