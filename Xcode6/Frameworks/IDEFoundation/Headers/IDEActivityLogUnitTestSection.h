

#import <IDEFoundation/IDEActivityLogSection.h>

@class NSString;

@interface IDEActivityLogUnitTestSection : IDEActivityLogSection
{
    NSString *_testsPassedString;
    NSString *_durationString;
    NSString *_summaryString;
    NSString *_suiteName;
    NSString *_testName;
    NSString *_performanceTestOutputString;
    long long _testsPassedCount;
}

+ (Class)logRecorderClass;
+ (id)defaultLogSectionDomainType;
@property long long testsPassedCount; // @synthesize testsPassedCount=_testsPassedCount;
@property(copy) NSString *performanceTestOutputString; // @synthesize performanceTestOutputString=_performanceTestOutputString;
@property(copy) NSString *testName; // @synthesize testName=_testName;
@property(copy) NSString *suiteName; // @synthesize suiteName=_suiteName;
@property(copy) NSString *summaryString; // @synthesize summaryString=_summaryString;
@property(copy) NSString *durationString; // @synthesize durationString=_durationString;
@property(copy) NSString *testsPassedString; // @synthesize testsPassedString=_testsPassedString;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initUnitTestWithTitle:(id)arg1 location:(id)arg2;

@end

