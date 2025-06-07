#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Texture.hpp"
#include "Texture2DDynamic.hpp"
void* _Script_Engine::Texture2DDynamic::get_Format() {
    return (void*)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Class* _Script_Engine::Texture2DDynamic::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Texture2DDynamic");
    return result;
}
