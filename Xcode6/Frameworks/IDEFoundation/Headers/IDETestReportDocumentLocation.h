

#import <DVTFoundation/DVTDocumentLocation.h>

@class NSString;

@interface IDETestReportDocumentLocation : DVTDocumentLocation
{
    NSString *_testClassName;
    NSString *_testMethodName;
}

@property(copy) NSString *testMethodName; // @synthesize testMethodName=_testMethodName;
@property(copy) NSString *testClassName; // @synthesize testClassName=_testClassName;
- (BOOL)isEqual:(id)other;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 testClassName:(id)arg3 testMethodName:(id)arg4;

@end

