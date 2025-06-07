#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "VirtualTextureSpace.hpp"
int32_t& _Script_Engine::VirtualTextureSpace::get_PoolSize() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
void* _Script_Engine::VirtualTextureSpace::get_Layers() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Engine::VirtualTextureSpace::get_TileSize() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Engine::VirtualTextureSpace::get_BorderWidth() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
int32_t& _Script_Engine::VirtualTextureSpace::get_Size() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Engine::VirtualTextureSpace::get_Dimensions() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
void* _Script_Engine::VirtualTextureSpace::get_Format() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::VirtualTextureSpace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VirtualTextureSpace");
    return result;
}
