

#import <Foundation/Foundation.h>

@class IDEIndexNewFile;

@interface IDEIndexNewSymbol : NSObject
{
    IDEIndexNewFile *_file;
    long long _lineNumber;
    long long _column;
    long long _symbolId;
    unsigned long long _containerSeq;
    BOOL _hasBody;
}

@property(readonly, nonatomic) BOOL hasBody; // @synthesize hasBody=_hasBody;
@property(nonatomic) unsigned long long containerSeq; // @synthesize containerSeq=_containerSeq;
@property(nonatomic) long long symbolId; // @synthesize symbolId=_symbolId;
@property(readonly, nonatomic) long long column; // @synthesize column=_column;
@property(readonly, nonatomic) long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, nonatomic) __weak IDEIndexNewFile *file; // @synthesize file=_file;
- (void)didAddBody;
@property(readonly, nonatomic) long long realSymbolId;
- (id)initWithFile:(id)arg1 lineNumber:(long long)arg2 column:(long long)arg3;

@end

