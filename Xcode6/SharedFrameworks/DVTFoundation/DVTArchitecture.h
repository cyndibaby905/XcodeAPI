

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTArchitecture : NSObject
{
    BOOL _is64Bit;
    int _CPUType;
    int _CPUSubType;
    NSString *_canonicalName;
    NSString *_displayName;
}

+ (instancetype)architectureWithCPUType:(int)cpuType subType:(int)subType;
+ (instancetype)architectureWithCanonicalName:(id)name;
+ (NSSet *)allArchitectures;
+ (void)initialize;
@property(readonly) BOOL is64Bit; // @synthesize is64Bit=_is64Bit;
@property(readonly) int CPUSubType; // @synthesize CPUSubType=_CPUSubType;
@property(readonly) int CPUType; // @synthesize CPUType=_CPUType;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSString *canonicalName; // @synthesize canonicalName=_canonicalName;
- (BOOL)matchesCPUType:(int)cpuType andSubType:(int)subType;
- (NSString *)description;
- (instancetype)initWithExtension:(id)extension;
- (instancetype)initWithCanonicalName:(NSString *)name displayName:(NSString *)displayName CPUType:(int)cpuType CPUSubType:(int)subType is64Bit:(BOOL)is64Bit;

@end

