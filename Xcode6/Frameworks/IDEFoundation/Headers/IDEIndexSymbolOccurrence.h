

#import <Foundation/Foundation.h>

@class DVTDocumentLocation, DVTFilePath, IDEIndexSymbol, NSObject, NSURL;

@protocol IDEIndexQueryProvider;

@interface IDEIndexSymbolOccurrence : NSObject
{
    long long _role;
    DVTDocumentLocation *_location;
    long long _objectId;
    long long _lineNumber;
    long long _column;
    DVTFilePath *_file;
    NSURL *_moduleURL;
    BOOL _lookedForCorrespondingSymbol;
    IDEIndexSymbol *_correspondingSymbol;
    NSObject<IDEIndexQueryProvider> *_queryProvider;
}

+ (id)newSymbolOccurrenceForSymbol:(id)arg1 role:(long long)arg2 location:(id)arg3 forQueryProvider:(id)arg4;
+ (id)newSymbolOccurrenceForSymbol:(id)arg1 objectId:(long long)arg2 role:(long long)arg3 lineNumber:(long long)arg4 column:(long long)arg5 file:(id)arg6 forQueryProvider:(id)arg7;
@property(readonly, nonatomic) NSObject<IDEIndexQueryProvider> *queryProvider; // @synthesize queryProvider=_queryProvider;
@property(readonly, nonatomic) long long column; // @synthesize column=_column;
@property(readonly, nonatomic) long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, nonatomic) long long role; // @synthesize role=_role;
@property(readonly, nonatomic) long long objectId; // @synthesize objectId=_objectId;
- (id)callees;
@property(readonly, nonatomic) DVTDocumentLocation *location;
@property(readonly, nonatomic) NSURL *moduleURL;
@property(readonly, nonatomic) DVTFilePath *file;
- (id)occurrence;
- (id)containingSymbol;
- (NSString *)description;
- (void)setOccurrence:(id)arg1;
- (void)setRole:(long long)arg1 location:(id)arg2;
- (void)setObjectId:(long long)arg1 role:(long long)arg2 lineNumber:(long long)arg3 column:(long long)arg4 file:(id)arg5 moduleURL:(id)arg6;
- (void)setObjectId:(long long)arg1 role:(long long)arg2 lineNumber:(long long)arg3 column:(long long)arg4 file:(id)arg5;
- (id)correspondingSymbol;
- (id)initWithCorrespondingSymbol:(id)arg1 forQueryProvider:(id)arg2;

@end

