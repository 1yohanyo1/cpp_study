#include <iostream>

using namespace std;

class character{
public:
    character() : hp(100), power(100){};

protected:
    int hp;
    int power;

};

// 단일 상속
class player : public character{
public:
    player(){};

};

class monster{
public:
    monster(){};
    void get_damage(int _damage){};
    void attack(player target_player){};
    virtual void attack_special(player target_player); // 가상 함수 선언
};

void monster::attack_special(player target_player){
    cout << "기본 공격 : 데미지 - 10 hp" << endl;

}

// 다중 상속
class monster_a : public monster, character{
public:
    virtual void attack_special(player target_player)override;

};

void monster_a::attack_special(player target_player){
    cout << "인텡글 공격 : 데미지 - 15 hp" << endl;

}

class monster_b : public monster, character{
public:
    virtual void attack_special(player target_player)override;

};

void monster_b::attack_special(player target_player){
    cout << "가상 공격 : 데미지 - 0 hp" << endl;

}

class monster_c : public monster, character{
public:
    virtual void attack_special(player target_player) override;
    
};

void monster_c::attack_special(player target_player){
    cout << "강력 뇌전 공격 : 데미지 - 100 hp" << endl;

}

int main(){
    player player_1;

    // monster_a forest_monster;
    // monster_b tutorial_monster;
    // monster_c boss_monster;

    // cout << "몬스터 총 공격" << endl;
    // forest_monster.attack_special(player_1);
    // tutorial_monster.attack_special(player_1);
    // boss_monster.attack_special(player_1);
    
    // cout << endl << "기본(monster 클래스) 공격" << endl;
    // forest_monster.monster::attack_special(player_1);
    // tutorial_monster.monster::attack_special(player_1);
    // boss_monster.monster::attack_special(player_1);
    monster_a forest_monster;

    monster &mon = forest_monster; // 부모 클래스의 래퍼런스에 대입
    monster_a &mon_a = forest_monster; // 자식 클래스의 래퍼런스에 대입

    cout << endl << "부모 클래스 래퍼런스로 공격" << endl;
    mon.attack_special(player_1);

    cout << endl << "자식 클래스 래퍼런스로 공격" << endl;
    mon_a.attack_special(player_1);

    cout << endl << "네임스페이스 활용 공격" << endl;
    mon_a.monster::attack_special(player_1);
    
    return 0;
}