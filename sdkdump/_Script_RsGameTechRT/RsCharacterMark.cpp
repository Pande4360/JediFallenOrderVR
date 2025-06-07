#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "RsCharacterMark.hpp"
void* _Script_RsGameTechRT::RsCharacterMark::get_Texture() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_Engine::Texture2D*& _Script_RsGameTechRT::RsCharacterMark::get_TexturePtr() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsCharacterMark::get_SourceCoords() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsCharacterMark::get_DestMask() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_RsGameTechRT::RsCharacterMark::get_DestSize() {
    return *(float*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCharacterMark::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsCharacterMark");
    return result;
}
int32_t& _Script_RsGameTechRT::RsCharacterMark::get_UVChannel() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
