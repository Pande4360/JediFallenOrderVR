#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveLinearColor.hpp"
#include "CurveLinearColorAtlas.hpp"
#include "MaterialExpressionCurveAtlasRowParameter.hpp"
#include "MaterialExpressionScalarParameter.hpp"
_Script_Engine::CurveLinearColorAtlas*& _Script_Engine::MaterialExpressionCurveAtlasRowParameter::get_Atlas() {
    return *(_Script_Engine::CurveLinearColorAtlas**)((uintptr_t)this + 0x68);
}
_Script_Engine::CurveLinearColor*& _Script_Engine::MaterialExpressionCurveAtlasRowParameter::get_Curve() {
    return *(_Script_Engine::CurveLinearColor**)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionCurveAtlasRowParameter::get_InputTime() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionCurveAtlasRowParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionCurveAtlasRowParameter");
    return result;
}
