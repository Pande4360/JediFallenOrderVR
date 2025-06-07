#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Texture2D.hpp"
#include "TextureLightProfile.hpp"
float& _Script_Engine::TextureLightProfile::get_Brightness() {
    return *(float*)((uintptr_t)this + 0xe8);
}
float& _Script_Engine::TextureLightProfile::get_TextureMultiplier() {
    return *(float*)((uintptr_t)this + 0xec);
}
float& _Script_Engine::TextureLightProfile::get_SpotlightConeAngle() {
    return *(float*)((uintptr_t)this + 0xf0);
}
float& _Script_Engine::TextureLightProfile::get_SourceLength() {
    return *(float*)((uintptr_t)this + 0xf8);
}
float& _Script_Engine::TextureLightProfile::get_SourceRadius() {
    return *(float*)((uintptr_t)this + 0xf4);
}
_Script_CoreUObject::Class* _Script_Engine::TextureLightProfile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TextureLightProfile");
    return result;
}
