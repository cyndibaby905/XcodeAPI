

#import <Foundation/Foundation.h>

@class DVTDiffDataSource;

@interface _DVTDiffHashingDictionaryDiffHashContext : NSObject
{
    DVTDiffDataSource *_dataSource;
    unsigned long long _diffHash;
}

@property unsigned long long diffHash; // @synthesize diffHash=_diffHash;
@property(retain) DVTDiffDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)initWithDataSource:(id)arg1 diffHash:(unsigned long long)arg2;

@end

