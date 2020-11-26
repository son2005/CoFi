# https://app.codesignal.com/challenge/FoLQfTBNbgKixe8xf
def allianceHelp(t, allianceSize):
    return max(0, t - (max(t // 10, 60) * (10 if allianceSize > 9 else allianceSize)))
