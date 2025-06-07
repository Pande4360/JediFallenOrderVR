#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\DateTime.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\PolyglotTextData.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Timespan.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "KismetTextLibrary.hpp"
bool _Script_Engine::KismetTextLibrary::TextIsFromStringTable(void*& Text) {
    return;
}
bool _Script_Engine::KismetTextLibrary::TextIsTransient(void*& InText) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::KismetTextLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.KismetTextLibrary");
    return result;
}
void* _Script_Engine::KismetTextLibrary::TextTrimPreceding(void*& InText) {
    return;
}
void* _Script_Engine::KismetTextLibrary::TextTrimTrailing(void*& InText) {
    return;
}
void* _Script_Engine::KismetTextLibrary::TextTrimPrecedingAndTrailing(void*& InText) {
    return;
}
void* _Script_Engine::KismetTextLibrary::TextToUpper(void*& InText) {
    return;
}
void* _Script_Engine::KismetTextLibrary::TextToLower(void*& InText) {
    return;
}
bool _Script_Engine::KismetTextLibrary::TextIsEmpty(void*& InText) {
    return;
}
bool _Script_Engine::KismetTextLibrary::TextIsCultureInvariant(void*& InText) {
    return;
}
void* _Script_Engine::KismetTextLibrary::TextFromStringTable(void* TableId, void* Key) {
    return;
}
bool _Script_Engine::KismetTextLibrary::StringTableIdAndKeyFromText(void* Text, void*& OutTableId, void*& OutKey) {
    return;
}
void* _Script_Engine::KismetTextLibrary::PolyglotDataToText(_Script_CoreUObject::PolyglotTextData& PolyglotData) {
    return;
}
bool _Script_Engine::KismetTextLibrary::NotEqual_TextText(void*& A, void*& B) {
    return;
}
bool _Script_Engine::KismetTextLibrary::NotEqual_IgnoreCase_TextText(void*& A, void*& B) {
    return;
}
void _Script_Engine::KismetTextLibrary::IsPolyglotDataValid(_Script_CoreUObject::PolyglotTextData& PolyglotData, bool& IsValid, void*& ErrorMessage) {
    return;
}
void* _Script_Engine::KismetTextLibrary::GetEmptyText() {
    return;
}
void* _Script_Engine::KismetTextLibrary::Format(void* InPattern, void* InArgs) {
    return;
}
bool _Script_Engine::KismetTextLibrary::FindTextInLocalizationTable(void* Namespace, void* Key, void*& OutText) {
    return;
}
bool _Script_Engine::KismetTextLibrary::EqualEqual_TextText(void*& A, void*& B) {
    return;
}
bool _Script_Engine::KismetTextLibrary::EqualEqual_IgnoreCase_TextText(void*& A, void*& B) {
    return;
}
void* _Script_Engine::KismetTextLibrary::Conv_VectorToText(_Script_CoreUObject::Vector InVec) {
    return;
}
void* _Script_Engine::KismetTextLibrary::Conv_Vector2dToText(_Script_CoreUObject::Vector2D InVec) {
    return;
}
void* _Script_Engine::KismetTextLibrary::AsDateTime_DateTime(_Script_CoreUObject::DateTime& In) {
    return;
}
void* _Script_Engine::KismetTextLibrary::Conv_TransformToText(_Script_CoreUObject::Transform& InTrans) {
    return;
}
void* _Script_Engine::KismetTextLibrary::Conv_TextToString(void*& InText) {
    return;
}
void* _Script_Engine::KismetTextLibrary::Conv_StringToText(void* inString) {
    return;
}
void* _Script_Engine::KismetTextLibrary::Conv_RotatorToText(_Script_CoreUObject::Rotator InRot) {
    return;
}
void* _Script_Engine::KismetTextLibrary::Conv_IntToText(int32_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits) {
    return;
}
void* _Script_Engine::KismetTextLibrary::Conv_ObjectToText(_Script_CoreUObject::Object* InObj) {
    return;
}
void* _Script_Engine::KismetTextLibrary::AsCurrency_Float(float Value, void* RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, void* CurrencyCode) {
    return;
}
void* _Script_Engine::KismetTextLibrary::Conv_NameToText(void* InName) {
    return;
}
void* _Script_Engine::KismetTextLibrary::Conv_ByteToText(void* Value) {
    return;
}
void* _Script_Engine::KismetTextLibrary::Conv_FloatToText(float Value, void* RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits) {
    return;
}
void* _Script_Engine::KismetTextLibrary::Conv_ColorToText(_Script_CoreUObject::LinearColor InColor) {
    return;
}
void* _Script_Engine::KismetTextLibrary::Conv_BoolToText(bool InBool) {
    return;
}
void* _Script_Engine::KismetTextLibrary::AsCurrencyBase(int32_t BaseValue, void* CurrencyCode) {
    return;
}
void* _Script_Engine::KismetTextLibrary::AsTimeZoneTime_DateTime(_Script_CoreUObject::DateTime& InDateTime, void* InTimeZone) {
    return;
}
void* _Script_Engine::KismetTextLibrary::AsTimeZoneDate_DateTime(_Script_CoreUObject::DateTime& InDateTime, void* InTimeZone) {
    return;
}
void* _Script_Engine::KismetTextLibrary::AsTimeZoneDateTime_DateTime(_Script_CoreUObject::DateTime& InDateTime, void* InTimeZone) {
    return;
}
void* _Script_Engine::KismetTextLibrary::AsTimespan_Timespan(_Script_CoreUObject::Timespan& InTimespan) {
    return;
}
void* _Script_Engine::KismetTextLibrary::AsTime_DateTime(_Script_CoreUObject::DateTime& In) {
    return;
}
void* _Script_Engine::KismetTextLibrary::AsPercent_Float(float Value, void* RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits) {
    return;
}
void* _Script_Engine::KismetTextLibrary::AsDate_DateTime(_Script_CoreUObject::DateTime& InDateTime) {
    return;
}
void* _Script_Engine::KismetTextLibrary::AsCurrency_Integer(int32_t Value, void* RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, void* CurrencyCode) {
    return;
}
