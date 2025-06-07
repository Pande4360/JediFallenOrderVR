#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\IntVector.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "KismetStringLibrary.hpp"
void* _Script_Engine::KismetStringLibrary::GetCharacterArrayFromString(void* SourceString) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::KismetStringLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.KismetStringLibrary");
    return result;
}
float _Script_Engine::KismetStringLibrary::Conv_StringToFloat(void* inString) {
    return;
}
void* _Script_Engine::KismetStringLibrary::TrimTrailing(void* SourceString) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Trim(void* SourceString) {
    return;
}
void* _Script_Engine::KismetStringLibrary::BuildString_Bool(void* AppendTo, void* Prefix, bool InBool, void* Suffix) {
    return;
}
bool _Script_Engine::KismetStringLibrary::StartsWith(void* SourceString, void* InPrefix, void* SearchCase) {
    return;
}
void* _Script_Engine::KismetStringLibrary::ParseIntoArray(void* SourceString, void* Delimiter, bool CullEmptyStrings) {
    return;
}
void* _Script_Engine::KismetStringLibrary::ToUpper(void* SourceString) {
    return;
}
void* _Script_Engine::KismetStringLibrary::BuildString_Vector2d(void* AppendTo, void* Prefix, _Script_CoreUObject::Vector2D InVector2D, void* Suffix) {
    return;
}
void* _Script_Engine::KismetStringLibrary::ToLower(void* SourceString) {
    return;
}
void* _Script_Engine::KismetStringLibrary::TimeSecondsToString(float InSeconds) {
    return;
}
bool _Script_Engine::KismetStringLibrary::Split(void* SourceString, void* InStr, void*& LeftS, void*& RightS, void* SearchCase, void* searchDir) {
    return;
}
void* _Script_Engine::KismetStringLibrary::RightPad(void* SourceString, int32_t ChCount) {
    return;
}
void* _Script_Engine::KismetStringLibrary::RightChop(void* SourceString, int32_t Count) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Right(void* SourceString, int32_t Count) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Reverse(void* SourceString) {
    return;
}
int32_t _Script_Engine::KismetStringLibrary::ReplaceInline(void*& SourceString, void* SearchText, void* ReplacementText, void* SearchCase) {
    return;
}
void* _Script_Engine::KismetStringLibrary::BuildString_Rotator(void* AppendTo, void* Prefix, _Script_CoreUObject::Rotator InRot, void* Suffix) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Replace(void* SourceString, void* from, void* to, void* SearchCase) {
    return;
}
bool _Script_Engine::KismetStringLibrary::NotEqual_StrStr(void* A, void* B) {
    return;
}
bool _Script_Engine::KismetStringLibrary::NotEqual_StriStri(void* A, void* B) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Mid(void* SourceString, int32_t Start, int32_t Count) {
    return;
}
void* _Script_Engine::KismetStringLibrary::BuildString_IntVector(void* AppendTo, void* Prefix, _Script_CoreUObject::IntVector InIntVector, void* Suffix) {
    return;
}
bool _Script_Engine::KismetStringLibrary::MatchesWildcard(void* SourceString, void* Wildcard, void* SearchCase) {
    return;
}
int32_t _Script_Engine::KismetStringLibrary::Len(void* S) {
    return;
}
void* _Script_Engine::KismetStringLibrary::LeftPad(void* SourceString, int32_t ChCount) {
    return;
}
void* _Script_Engine::KismetStringLibrary::LeftChop(void* SourceString, int32_t Count) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Left(void* SourceString, int32_t Count) {
    return;
}
void* _Script_Engine::KismetStringLibrary::JoinStringArray(void*& SourceArray, void* Separator) {
    return;
}
bool _Script_Engine::KismetStringLibrary::IsNumeric(void* SourceString) {
    return;
}
void* _Script_Engine::KismetStringLibrary::GetSubstring(void* SourceString, int32_t StartIndex, int32_t Length) {
    return;
}
int32_t _Script_Engine::KismetStringLibrary::GetCharacterAsNumber(void* SourceString, int32_t Index) {
    return;
}
int32_t _Script_Engine::KismetStringLibrary::FindSubstring(void* SearchIn, void* Substring, bool bUseCase, bool bSearchFromEnd, int32_t StartPosition) {
    return;
}
bool _Script_Engine::KismetStringLibrary::EqualEqual_StrStr(void* A, void* B) {
    return;
}
bool _Script_Engine::KismetStringLibrary::EqualEqual_StriStri(void* A, void* B) {
    return;
}
bool _Script_Engine::KismetStringLibrary::EndsWith(void* SourceString, void* InSuffix, void* SearchCase) {
    return;
}
void* _Script_Engine::KismetStringLibrary::BuildString_Float(void* AppendTo, void* Prefix, float InFloat, void* Suffix) {
    return;
}
int32_t _Script_Engine::KismetStringLibrary::CullArray(void* SourceString, void*& inArray) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Conv_VectorToString(_Script_CoreUObject::Vector InVec) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Conv_Vector2dToString(_Script_CoreUObject::Vector2D InVec) {
    return;
}
void* _Script_Engine::KismetStringLibrary::BuildString_Object(void* AppendTo, void* Prefix, _Script_CoreUObject::Object* InObj, void* Suffix) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Conv_TransformToString(_Script_CoreUObject::Transform& InTrans) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Conv_RotatorToString(_Script_CoreUObject::Rotator InRot) {
    return;
}
void _Script_Engine::KismetStringLibrary::Conv_StringToVector2D(void* inString, _Script_CoreUObject::Vector2D& OutConvertedVector2D, bool& OutIsValid) {
    return;
}
void _Script_Engine::KismetStringLibrary::Conv_StringToVector(void* inString, _Script_CoreUObject::Vector& OutConvertedVector, bool& OutIsValid) {
    return;
}
void _Script_Engine::KismetStringLibrary::Conv_StringToRotator(void* inString, _Script_CoreUObject::Rotator& OutConvertedRotator, bool& OutIsValid) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Conv_StringToName(void* inString) {
    return;
}
int32_t _Script_Engine::KismetStringLibrary::Conv_StringToInt(void* inString) {
    return;
}
void _Script_Engine::KismetStringLibrary::Conv_StringToColor(void* inString, _Script_CoreUObject::LinearColor& OutConvertedColor, bool& OutIsValid) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Conv_ObjectToString(_Script_CoreUObject::Object* InObj) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Conv_NameToString(void* InName) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Conv_IntVectorToString(_Script_CoreUObject::IntVector InIntVec) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Conv_FloatToString(float InFloat) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Conv_IntToString(int32_t inInt) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Conv_ColorToString(_Script_CoreUObject::LinearColor InColor) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Conv_BoolToString(bool InBool) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Conv_ByteToString(void* InByte) {
    return;
}
bool _Script_Engine::KismetStringLibrary::Contains(void* SearchIn, void* Substring, bool bUseCase, bool bSearchFromEnd) {
    return;
}
void* _Script_Engine::KismetStringLibrary::Concat_StrStr(void* A, void* B) {
    return;
}
void* _Script_Engine::KismetStringLibrary::BuildString_Vector(void* AppendTo, void* Prefix, _Script_CoreUObject::Vector InVector, void* Suffix) {
    return;
}
void* _Script_Engine::KismetStringLibrary::BuildString_Name(void* AppendTo, void* Prefix, void* InName, void* Suffix) {
    return;
}
void* _Script_Engine::KismetStringLibrary::BuildString_Int(void* AppendTo, void* Prefix, int32_t inInt, void* Suffix) {
    return;
}
void* _Script_Engine::KismetStringLibrary::BuildString_Color(void* AppendTo, void* Prefix, _Script_CoreUObject::LinearColor InColor, void* Suffix) {
    return;
}
