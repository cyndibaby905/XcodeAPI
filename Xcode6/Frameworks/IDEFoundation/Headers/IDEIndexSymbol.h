

#import <IDEFoundation/IDEIndexSymbolOccurrence.h>

#import <IDEFoundation/IDEAutoImportable-Protocol.h>

@class DVTFilePath, DVTSourceCodeLanguage, DVTSourceCodeSymbolKind, IDEIndexCollection, NSObject, NSString;

@protocol IDEIndexQueryProvider;

@interface IDEIndexSymbol : IDEIndexSymbolOccurrence <IDEAutoImportable>
{
    NSString *_name;
    NSString *_displayName;
    NSString *_qualifiedDisplayName;
    DVTSourceCodeSymbolKind *_symbolKind;
    DVTSourceCodeLanguage *_symbolLanguage;
    NSString *_resolution;
    long long _rawKind;
    long long _rawLanguage;
    BOOL _haveModelOccurrence;
    BOOL _isVirtual;
    NSString *_moduleName;
}

+ (id)newSymbolOfKind:(id)arg1 language:(id)arg2 name:(id)arg3 moduleName:(id)arg4 resolution:(id)arg5 isVirtual:(BOOL)arg6 role:(long long)arg7 location:(id)arg8 forQueryProvider:(id)arg9;
+ (id)newSymbolOfKind:(id)arg1 language:(id)arg2 name:(id)arg3 resolution:(id)arg4 isVirtual:(BOOL)arg5 role:(long long)arg6 location:(id)arg7 forQueryProvider:(id)arg8;
+ (id)newSymbolOfKind:(id)arg1 language:(id)arg2 name:(id)arg3 resolution:(id)arg4 forQueryProvider:(id)arg5;
+ (id)newSymbolOfRawKind:(long long)arg1 rawLanguage:(long long)arg2 name:(id)arg3 resolution:(id)arg4 forQueryProvider:(id)arg5;
+ (id)newSymbolOfRawKind:(long long)arg1 kind:(id)arg2 rawLanguage:(long long)arg3 language:(id)arg4 name:(id)arg5 resolution:(id)arg6 forQueryProvider:(id)arg7;
+ (Class)classForSymbolKind:(id)arg1;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(nonatomic) BOOL isVirtual; // @synthesize isVirtual=_isVirtual;
@property(readonly, nonatomic) long long rawLanguage; // @synthesize rawLanguage=_rawLanguage;
@property(readonly, nonatomic) DVTSourceCodeLanguage *symbolLanguage; // @synthesize symbolLanguage=_symbolLanguage;
@property(readonly, nonatomic) long long rawKind; // @synthesize rawKind=_rawKind;
@property(readonly, nonatomic) DVTSourceCodeSymbolKind *symbolKind; // @synthesize symbolKind=_symbolKind;
@property(readonly, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic, getter=isAutoImportable) BOOL autoImportable;
@property(readonly, nonatomic) DVTFilePath *filePathToHeaderToImport;
@property(readonly, nonatomic) NSString *completionString;
- (id)qualifiedDisplayName;
- (id)displayName;
- (id)references;
- (id)referencingFiles;
- (id)containerSymbol;
- (id)containerSymbols;
@property(readonly, nonatomic) IDEIndexCollection *definitions;
- (id)declarations;
- (id)occurrences;
- (id)correspondingSymbol;
- (id)location;
- (id)file;
- (long long)column;
- (long long)lineNumber;
- (long long)role;
- (long long)objectId;
- (id)occurrence;
@property(readonly, nonatomic) BOOL hasOccurrence;
- (void)setModelOccurrenceObjectId:(long long)arg1 role:(long long)arg2 lineNumber:(long long)arg3 column:(long long)arg4 file:(id)arg5;
- (void)setModelOccurrenceRole:(long long)arg1 location:(id)arg2;
- (void)setModelOccurrence:(id)arg1;
- (id)modelOccurrence;
@property(readonly, nonatomic, getter=isInProject) BOOL inProject;
- (BOOL)isEqual:(id)other;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)setRawKind:(long long)arg1 kind:(id)arg2 rawLanguage:(long long)arg3 language:(id)arg4 name:(id)arg5 resolution:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSObject<IDEIndexQueryProvider> *queryProvider;
@property(readonly) Class superclass;

@end

