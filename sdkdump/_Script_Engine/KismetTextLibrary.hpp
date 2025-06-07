#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct PolyglotTextData;
}
namespace _Script_CoreUObject {
struct Timespan;
}
namespace _Script_CoreUObject {
struct DateTime;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct KismetTextLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void* TextTrimTrailing(void*& InText);
    void* TextTrimPrecedingAndTrailing(void*& InText);
    void* TextTrimPreceding(void*& InText);
    void* TextToUpper(void*& InText);
    void* TextToLower(void*& InText);
    bool TextIsTransient(void*& InText);
    bool TextIsFromStringTable(void*& Text);
    bool TextIsEmpty(void*& InText);
    bool TextIsCultureInvariant(void*& InText);
    void* TextFromStringTable(void* TableId, void* Key);
    bool StringTableIdAndKeyFromText(void* Text, void*& OutTableId, void*& OutKey);
    void* PolyglotDataToText(_Script_CoreUObject::PolyglotTextData& PolyglotData);
    bool NotEqual_TextText(void*& A, void*& B);
    bool NotEqual_IgnoreCase_TextText(void*& A, void*& B);
    void IsPolyglotDataValid(_Script_CoreUObject::PolyglotTextData& PolyglotData, bool& IsValid, void*& ErrorMessage);
    void* GetEmptyText();
    void* Format(void* InPattern, void* InArgs);
    bool FindTextInLocalizationTable(void* Namespace, void* Key, void*& OutText);
    bool EqualEqual_TextText(void*& A, void*& B);
    bool EqualEqual_IgnoreCase_TextText(void*& A, void*& B);
    void* Conv_VectorToText(_Script_CoreUObject::Vector InVec);
    void* Conv_Vector2dToText(_Script_CoreUObject::Vector2D InVec);
    void* Conv_TransformToText(_Script_CoreUObject::Transform& InTrans);
    void* Conv_TextToString(void*& InText);
    void* Conv_StringToText(void* inString);
    void* Conv_RotatorToText(_Script_CoreUObject::Rotator InRot);
    void* Conv_ObjectToText(_Script_CoreUObject::Object* InObj);
    void* Conv_NameToText(void* InName);
    void* Conv_IntToText(int32_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits);
    void* Conv_FloatToText(float Value, void* RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits);
    void* Conv_ColorToText(_Script_CoreUObject::LinearColor InColor);
    void* Conv_ByteToText(void* Value);
    void* Conv_BoolToText(bool InBool);
    void* AsTimeZoneTime_DateTime(_Script_CoreUObject::DateTime& InDateTime, void* InTimeZone);
    void* AsTimeZoneDateTime_DateTime(_Script_CoreUObject::DateTime& InDateTime, void* InTimeZone);
    void* AsTimeZoneDate_DateTime(_Script_CoreUObject::DateTime& InDateTime, void* InTimeZone);
    void* AsTimespan_Timespan(_Script_CoreUObject::Timespan& InTimespan);
    void* AsTime_DateTime(_Script_CoreUObject::DateTime& In);
    void* AsPercent_Float(float Value, void* RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits);
    void* AsDateTime_DateTime(_Script_CoreUObject::DateTime& In);
    void* AsDate_DateTime(_Script_CoreUObject::DateTime& InDateTime);
    void* AsCurrencyBase(int32_t BaseValue, void* CurrencyCode);
    void* AsCurrency_Integer(int32_t Value, void* RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, void* CurrencyCode);
    void* AsCurrency_Float(float Value, void* RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, void* CurrencyCode);
}; // Size: 0x28
#pragma pack(pop)
}
