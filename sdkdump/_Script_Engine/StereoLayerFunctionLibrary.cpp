#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "StereoLayerFunctionLibrary.hpp"
#include "Texture.hpp"
void _Script_Engine::StereoLayerFunctionLibrary::HideSplashScreen() {
    return;
}
void _Script_Engine::StereoLayerFunctionLibrary::SetSplashScreen(_Script_Engine::Texture* Texture, _Script_CoreUObject::Vector2D Scale, _Script_CoreUObject::Vector2D Offset, bool bShowLoadingMovie, bool bShowOnSet) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::StereoLayerFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.StereoLayerFunctionLibrary");
    return result;
}
void _Script_Engine::StereoLayerFunctionLibrary::ShowSplashScreen() {
    return;
}
void _Script_Engine::StereoLayerFunctionLibrary::EnableAutoLoadingSplashScreen(bool InAutoShowEnabled) {
    return;
}
