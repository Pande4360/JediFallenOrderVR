#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\IntVector.hpp"
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
namespace _Script_Engine {
#pragma pack(push, 1)
struct KismetStringLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void* TrimTrailing(void* SourceString);
    void* Trim(void* SourceString);
    void* ToUpper(void* SourceString);
    void* ToLower(void* SourceString);
    void* TimeSecondsToString(float InSeconds);
    bool StartsWith(void* SourceString, void* InPrefix, void* SearchCase);
    bool Split(void* SourceString, void* InStr, void*& LeftS, void*& RightS, void* SearchCase, void* searchDir);
    void* RightPad(void* SourceString, int32_t ChCount);
    void* RightChop(void* SourceString, int32_t Count);
    void* Right(void* SourceString, int32_t Count);
    void* Reverse(void* SourceString);
    int32_t ReplaceInline(void*& SourceString, void* SearchText, void* ReplacementText, void* SearchCase);
    void* Replace(void* SourceString, void* from, void* to, void* SearchCase);
    void* ParseIntoArray(void* SourceString, void* Delimiter, bool CullEmptyStrings);
    bool NotEqual_StrStr(void* A, void* B);
    bool NotEqual_StriStri(void* A, void* B);
    void* Mid(void* SourceString, int32_t Start, int32_t Count);
    bool MatchesWildcard(void* SourceString, void* Wildcard, void* SearchCase);
    int32_t Len(void* S);
    void* LeftPad(void* SourceString, int32_t ChCount);
    void* LeftChop(void* SourceString, int32_t Count);
    void* Left(void* SourceString, int32_t Count);
    void* JoinStringArray(void*& SourceArray, void* Separator);
    bool IsNumeric(void* SourceString);
    void* GetSubstring(void* SourceString, int32_t StartIndex, int32_t Length);
    int32_t GetCharacterAsNumber(void* SourceString, int32_t Index);
    void* GetCharacterArrayFromString(void* SourceString);
    int32_t FindSubstring(void* SearchIn, void* Substring, bool bUseCase, bool bSearchFromEnd, int32_t StartPosition);
    bool EqualEqual_StrStr(void* A, void* B);
    bool EqualEqual_StriStri(void* A, void* B);
    bool EndsWith(void* SourceString, void* InSuffix, void* SearchCase);
    int32_t CullArray(void* SourceString, void*& inArray);
    void* Conv_VectorToString(_Script_CoreUObject::Vector InVec);
    void* Conv_Vector2dToString(_Script_CoreUObject::Vector2D InVec);
    void* Conv_TransformToString(_Script_CoreUObject::Transform& InTrans);
    void Conv_StringToVector2D(void* inString, _Script_CoreUObject::Vector2D& OutConvertedVector2D, bool& OutIsValid);
    void Conv_StringToVector(void* inString, _Script_CoreUObject::Vector& OutConvertedVector, bool& OutIsValid);
    void Conv_StringToRotator(void* inString, _Script_CoreUObject::Rotator& OutConvertedRotator, bool& OutIsValid);
    void* Conv_StringToName(void* inString);
    int32_t Conv_StringToInt(void* inString);
    float Conv_StringToFloat(void* inString);
    void Conv_StringToColor(void* inString, _Script_CoreUObject::LinearColor& OutConvertedColor, bool& OutIsValid);
    void* Conv_RotatorToString(_Script_CoreUObject::Rotator InRot);
    void* Conv_ObjectToString(_Script_CoreUObject::Object* InObj);
    void* Conv_NameToString(void* InName);
    void* Conv_IntVectorToString(_Script_CoreUObject::IntVector InIntVec);
    void* Conv_IntToString(int32_t inInt);
    void* Conv_FloatToString(float InFloat);
    void* Conv_ColorToString(_Script_CoreUObject::LinearColor InColor);
    void* Conv_ByteToString(void* InByte);
    void* Conv_BoolToString(bool InBool);
    bool Contains(void* SearchIn, void* Substring, bool bUseCase, bool bSearchFromEnd);
    void* Concat_StrStr(void* A, void* B);
    void* BuildString_Vector2d(void* AppendTo, void* Prefix, _Script_CoreUObject::Vector2D InVector2D, void* Suffix);
    void* BuildString_Vector(void* AppendTo, void* Prefix, _Script_CoreUObject::Vector InVector, void* Suffix);
    void* BuildString_Rotator(void* AppendTo, void* Prefix, _Script_CoreUObject::Rotator InRot, void* Suffix);
    void* BuildString_Object(void* AppendTo, void* Prefix, _Script_CoreUObject::Object* InObj, void* Suffix);
    void* BuildString_Name(void* AppendTo, void* Prefix, void* InName, void* Suffix);
    void* BuildString_IntVector(void* AppendTo, void* Prefix, _Script_CoreUObject::IntVector InIntVector, void* Suffix);
    void* BuildString_Int(void* AppendTo, void* Prefix, int32_t inInt, void* Suffix);
    void* BuildString_Float(void* AppendTo, void* Prefix, float InFloat, void* Suffix);
    void* BuildString_Color(void* AppendTo, void* Prefix, _Script_CoreUObject::LinearColor InColor, void* Suffix);
    void* BuildString_Bool(void* AppendTo, void* Prefix, bool InBool, void* Suffix);
}; // Size: 0x28
#pragma pack(pop)
}
