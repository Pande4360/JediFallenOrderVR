#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionTextureCoordinate.hpp"
int32_t& _Script_Engine::MaterialExpressionTextureCoordinate::get_CoordinateIndex() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::MaterialExpressionTextureCoordinate::get_UnMirrorU() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
float& _Script_Engine::MaterialExpressionTextureCoordinate::get_UTiling() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_Engine::MaterialExpressionTextureCoordinate::get_VTiling() {
    return *(float*)((uintptr_t)this + 0x48);
}
void _Script_Engine::MaterialExpressionTextureCoordinate::set_UnMirrorU(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MaterialExpressionTextureCoordinate::set_ContainsPackedData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::MaterialExpressionTextureCoordinate::get_UnMirrorV() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 2 != 0;
}
void _Script_Engine::MaterialExpressionTextureCoordinate::set_UnMirrorV(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::MaterialExpressionTextureCoordinate::get_ContainsPackedData() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 4 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTextureCoordinate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTextureCoordinate");
    return result;
}
