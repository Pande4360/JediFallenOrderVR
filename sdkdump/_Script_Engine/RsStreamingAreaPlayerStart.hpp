#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PlayerStart.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsStreamingAreaPlayerStart : public PlayerStart {
    private: char pad_390[0x40]; public:
    void* get_StreamingAreasToLoad();
    void* get_InitialLoadTokens();
    void* get_InitialLoadToken();
    bool get_bCanBeAutoSelected();
    void set_bCanBeAutoSelected(bool value);
    bool get_bCanBeSelectedByUser();
    void set_bCanBeSelectedByUser(bool value);
    void* get_OnStartAtPlayerStart();
    static _Script_CoreUObject::Class* static_class();
    void PopulateStreamingAreaNameOptions(_Script_CoreUObject::Object* ContextObject, void*& OutAreaNames);
    void OnStart(void* LoadType);
}; // Size: 0x3d0
#pragma pack(pop)
}
