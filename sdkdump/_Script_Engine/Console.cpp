#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Console.hpp"
#include "LocalPlayer.hpp"
#include "Texture2D.hpp"
_Script_Engine::Texture2D*& _Script_Engine::Console::get_DefaultTexture_White() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x48);
}
_Script_Engine::LocalPlayer*& _Script_Engine::Console::get_ConsoleTargetPlayer() {
    return *(_Script_Engine::LocalPlayer**)((uintptr_t)this + 0x38);
}
_Script_Engine::Texture2D*& _Script_Engine::Console::get_DefaultTexture_Black() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x40);
}
void* _Script_Engine::Console::get_HistoryBuffer() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Engine::Console::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Console");
    return result;
}
