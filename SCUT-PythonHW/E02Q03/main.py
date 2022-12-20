# encoding utf-8
# E02Q03

import random


def poker_game():
    """
    :rtype: List[List[str]]
    """

    # 红桃, 黑桃, 梅花, 方块
    suit = ['H', 'S', 'C', 'D']
    nums = [str(i) for i in range(1, 11)] + ['J', 'Q', 'K']

    # 请补全代码，生成所有的扑克牌，形如[H1, H2, ..., HK, S1, S2, ..., DK]
    all_cards = []
    for i in range(4):
        for j in range(13):
            all_cards += [suit[i] + nums[j]]

    # 加入大小王
    all_cards += ['RJ', "BJ"]

    # 请补全洗牌代码
    random.shuffle(all_cards)

    # 请自行设计发牌规则，为3个玩家发牌。
    # 最终结果保存在results中，其中每个list保存一个玩家的扑克牌
    results = [[] for _ in range(3)]

    # 请补全发牌代码

    # 请补全代码，对玩家手牌排序

    return results


print(poker_game())
