n = int(input())
first_team = input()
second_team = ""
user_inputs = []
user_inputs.append(first_team)
for i in range(n - 1):
    next_team = input()
    user_inputs.append(next_team)
    if next_team != first_team and next_team != second_team:
        second_team = next_team
first_team_count = 0
second_team_count = 0
for i in range(n):
    if user_inputs[i] == first_team:
        first_team_count += 1
    else:
        second_team_count += 1
if first_team_count > second_team_count:
    print(first_team)
else:
    print(second_team)